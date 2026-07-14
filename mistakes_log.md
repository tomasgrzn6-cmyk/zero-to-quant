# Mistake Log

| Date | Topic | Mistake | Fix / Lesson |
|---|---|---|---|
| 2026-07-12 | Linear algebra | Computed B×A instead of A×B (Q5) | Double-check multiplication order matches what's asked |
| 2026-07-12 | C++ / scope | Used `next` outside the loop where it was declared | Variables only exist inside the `{ }` they're declared in |
| 2026-07-12 | C++ / shadowing | Redeclared `int next` inside the loop, shadowing the outer one | Don't repeat `int` when assigning to an existing variable |
| 2026-07-12 | C++ / logic | Divided `next / curr` for golden ratio — always gives 1 | `curr` and `next` end up equal; use `curr / prev` instead |
| 2026-07-12 | C++ / functions | Tried defining a function inside `main()` | Functions must be declared separately, outside `main()` |
| 2026-07-12 | C++ / syntax | Missing semicolon after `do-while`, missing closing brace | Every `{` needs a matching `}`; `do-while` ends with `while(...);` |
| 2026-07-14 | Linear algebra | Said span depends on "changing x or y," missed the actual condition | Span = whole plane requires linear independence (not scalar multiples of each other) |
| 2026-07-14 | Linear algebra | Computed (-3, 2) for matrix×(2,3), sign error | Answer is (3, 2) — this matrix swaps x/y coords (reflection over y=x); redo by hand |
| 2026-07-14 | Proof writing | Described proof by contradiction instead of the for-all vs there-exists distinction | For-all = arbitrary representative; there-exists = one concrete example. Contradiction is a separate technique, works on either |
| 2026-07-14 | Statistics | Couldn't recall core definition of statistics | Drawing reliable conclusions about a population from a limited sample, while quantifying the uncertainty in doing so |
