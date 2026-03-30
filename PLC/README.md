# PLC Development Guide

# 1. State Machine Naming Convention

State machine constants should use clear and descriptive names.

Recommended format:

```scl 
STATE_STATE_NAME
```

Example:

```scl
STATE_INIT := 0; 
STATE_IDLE := 1;
STATE_START := 2;
\\VBOXSVR
simens halozatra kell fel meni
simens123

robot ip: 192.168.1.100


```

------------------------------------------------------------------------

# 2. State Machine Variable

Each device should have a dedicated state machine variable.

Example:

```scl
deviceCurrentState : INT;
```

Rules:

-   State machine variables should be INT
-   State numbering should start from 0
-   The initial state must always be the initialization state

Example initialization:

```scl
deviceCurrentState := STATE_INIT;
```

------------------------------------------------------------------------

# 3. State Machine Must Be Designed First

Before writing control logic, the state machine must be designed.

Recommended design flow:

1.  Define device states
2.  Assign numeric values
3.  Implement CASE structure and add logic inside states  

------------------------------------------------------------------------

# 4. State Machine Structure

All PLC state machines should be implemented using a CASE structure.

```scl
CASE deviceCurrentState OF
    STATE_INIT:
        (* initialization code *)

    STATE_IDLE:
        (* waiting for command *)

    STATE_RUNNING:
        (* device operation *)
END_CASE;
```

------------------------------------------------------------------------

# 5. Example State Machine Implementation
## 5. Example State Machine Implementation

```scl
CASE #deviceCurrentState OF
    #STATE_INIT:
        "ENTRY_CONVEYOR" := FALSE;
        "STOP_BLADE" := FALSE;
        "EXIT_CONVEYOR" := FALSE;
        #deviceCurrentState := #STATE_IDLE;

    #STATE_IDLE:
        IF "START_BUTTON" AND "AUTO_SWITCH" THEN
            "START_LIGHT" := TRUE;
            "ENTRY_CONVEYOR" := TRUE;
            "EXIT_CONVEYOR" := TRUE;
            #deviceCurrentState := #STATE_CAMERA_WAIT_FOR_SIGNAL;
        END_IF;
END_CASE;
```
------------------------------------------------------------------------

# 6. Variable Naming

Variables should be named in a way that clearly describes their purpose.

Simple internal variables can use short descriptive names.

Rules:

-   Use camelCase
-   Names must clearly describe the purpose
-   Avoid cryptic names like: x1, tmp, varA
-   Keep names short but meaningful

Good examples:

```scl
conveyorRunning boxReady partDetected systemTimer
```

Bad examples:

```scl
t1 v2 tempA x
```

------------------------------------------------------------------------

# 7. Key Rules for State Machine Design

Only one state must be active at any time.

State transitions must be explicit.

Example:

```scl
deviceCurrentState := STATE_IDLE;
```

Initialization states should reset outputs to safe conditions.

Example:

```scl
STATE_INIT: "ENTRY_CONVEYOR" := FALSE; "EXIT_CONVEYOR" := FALSE;
```

Each subsystem should have its own state machine.

Example:

```scl
deviceCurrentState beltControlState robotControlState
```