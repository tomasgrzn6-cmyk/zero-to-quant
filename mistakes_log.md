# Mistake Log

| Date | Topic | Mistake | Fix / Lesson |
|---|---|---|---|
| 2026-07-12 | Linear algebra | Assumed 180° rotation × stretch don't commute | Any scalar multiple of identity commutes with everything |
| 2026-07-12 | Linear algebra | Computed B×A instead of A×B (Q5) | Double-check multiplication order matches what's asked |
| 2026-07-12 | C++ / scope | Used `next` outside the loop where it was declared | Variables only exist inside the `{ }` they're declared in |
| 2026-07-12 | C++ / shadowing | Redeclared `int next` inside the loop, shadowing the outer one | Don't repeat `int` when assigning to an existing variable |
| 2026-07-12 | C++ / logic | Divided `next / curr` for golden ratio — always gives 1 | `curr` and `next` end up equal; use `curr / prev` instead |
| 2026-07-12 | C++ / functions | Tried defining a function inside `main()` | Functions must be declared separately, outside `main()` |
| 2026-07-12 | C++ / syntax | Missing semicolon after `do-while`, missing closing brace | Every `{` needs a matching `}`; `do-while` ends with `while(...);` |
