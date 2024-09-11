---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/process-state-codes/"}
---

---

| Code | Description                                                           |
| ---- | --------------------------------------------------------------------- |
| `R`  | Running or runnable (on run queue)                                    |
| `D`  | Uninterruptible sleep (usually IO)                                    |
| `S`  | Interruptible sleep (waiting for an event to complete)                |
| `Z`  | Defunct/zombie, terminated but not reaped by its parent               |
| `T`  | Stopped, either by a job control signal or because it is being traced |
|      |                                                                       |
| `<`  | High-priority (not nice to other users)                               |
| `N`  | Low-priority (nice to other users)                                    |
| `L`  | has pages locked into memory (for real-time and custom IO)            |
| `s`  | Is a session leader                                                   |
| `l`  | Is multi-threaded (using _CLONE_THREAD_, like NPTL pthreads do)       |
| `+`  | Is in the foreground process group                                    |
Niceness and priority
[Process 'niceness' vs. 'priority' - Ask Ubuntu](https://askubuntu.com/questions/656771/process-niceness-vs-priority)