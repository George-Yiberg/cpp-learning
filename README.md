

# 1 Introduction

This repository is used for cpp learning.







# 2 C++ 11

In the C++ 11 programme, __cplusplus means 201103 and it is long.

from https://www.learncpp.com/cpp-tutorial/introduction-to-c11/

**What is C++11?**

On August 12, 2011, the [ISO (International Organization for Standardization)](https://www.iso.org/home.html) approved a new version of C++, called C++11. C++11 adds a whole new set of features to the C++ language! Use of these new features is entirely optional -- but you will undoubtedly find some of them helpful. The prior tutorials have all been updated to be C++11 compliant.

**The goals and designs of C++11**

Bjarne Stroustrup characterized the goals of C++11 as such:

- Build on C++’s strengths -- rather than trying to extend C++ to new areas where it may be weaker (eg. Windows applications with heavy GUI), focus on making it do what it does well even better.
- Make C++ easier to learn, use, and teach -- provide functionality that makes the language more consistent and easier to use.

To that end, the committee that put the language together tried to obey the following general principles:

- Maintain stability and compatibility with older versions of C++ and C wherever possible. Programs that worked under C++03 should generally still work under C++11.
- Keep the number of core language extensions to a minimum, and put the bulk of the changes in the standard library (an objective that wasn’t met very well with this release)
- Focus on improving abstraction mechanisms (classes, templates) rather than adding mechanisms to handle specific, narrow situations.
- Add new functionality for both novices and experts. A little of something for everybody!
- Increase type safety, to prevent inadvertent bugs.
- Improve performance and allow C++ to work directly with hardware.
- Consider usability and ecosystem issues. C++ needs to work well with other tools, be easy to use and teach, etc…

C++11 isn’t a large departure from C++03 thematically, but it did add a huge amount of new functionality.

**Major new features in C++11**

For your interest, here’s a list of the major features that C++11 adds. Note that this list is not comprehensive, but rather intended to highlight some of the key features of interest.

- auto ([10.8 -- Type deduction for objects using the auto keyword](https://www.learncpp.com/cpp-tutorial/type-deduction-for-objects-using-the-auto-keyword/))
- char16_t and char32_t and new literals to support them (no tutorial yet)
- constexpr ([5.1 -- Constant variables (named constants)](https://www.learncpp.com/cpp-tutorial/constant-variables-named-constants/))
- decltype (no tutorial yet)
- default specifier ([14.11 -- Default constructors and default arguments](https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/))
- Delegating constructors ([14.12 -- Delegating constructors](https://www.learncpp.com/cpp-tutorial/delegating-constructors/))
- delete specifier ([11.4 -- Deleting functions](https://www.learncpp.com/cpp-tutorial/deleting-functions/))
- Enum classes ([13.6 -- Scoped enumerations (enum classes)](https://www.learncpp.com/cpp-tutorial/scoped-enumerations-enum-classes/))
- Extern templates (no tutorial yet)
- Lambda expressions ([20.6 -- Introduction to lambdas (anonymous functions)](https://www.learncpp.com/cpp-tutorial/introduction-to-lambdas-anonymous-functions/)) and captures ([20.7 -- Lambda captures](https://www.learncpp.com/cpp-tutorial/lambda-captures/))
- long long int ([4.3 -- Object sizes and the sizeof operator](https://www.learncpp.com/cpp-tutorial/object-sizes-and-the-sizeof-operator/))
- Move constructor and assignment ([22.3 -- Move constructors and move assignment](https://www.learncpp.com/cpp-tutorial/move-constructors-and-move-assignment/))
- Noexcept specifier (quick mention in [27.4 -- Uncaught exceptions and catch-all handlers](https://www.learncpp.com/cpp-tutorial/uncaught-exceptions-catch-all-handlers/))
- nullptr ([12.8 -- Null pointers](https://www.learncpp.com/cpp-tutorial/null-pointers/))
- override and final specifiers([25.3 -- The override and final specifiers, and covariant return types](https://www.learncpp.com/cpp-tutorial/the-override-and-final-specifiers-and-covariant-return-types/))
- Range-based for statements ([16.8 -- Range-based for loops (for-each)](https://www.learncpp.com/cpp-tutorial/range-based-for-loops-for-each/))
- r-value references ([22.2 -- R-value references](https://www.learncpp.com/cpp-tutorial/rvalue-references/))
- static_assert ([9.6 -- Assert and static_assert](https://www.learncpp.com/cpp-tutorial/assert-and-static_assert/))
- std::initializer_list ([23.7 -- std::initializer_list](https://www.learncpp.com/cpp-tutorial/stdinitializer_list/))
- Trailing return type syntax ([10.8 -- Type deduction for objects using the auto keyword](https://www.learncpp.com/cpp-tutorial/type-deduction-for-objects-using-the-auto-keyword/))
- Type aliases ([10.7 -- Typedefs and type aliases](https://www.learncpp.com/cpp-tutorial/typedefs-and-type-aliases/))
- typedef can now typedef template classes
- Uniform initialization ([4.1 -- Introduction to fundamental data types](https://www.learncpp.com/cpp-tutorial/introduction-to-fundamental-data-types/))
- User-defined literals (no tutorial yet)
- Variadic templates (no tutorial yet)
- Two >> symbols without a space between them will now properly be interpreted as closing a template object

There are also many new classes in the C++ standard library available for use.



- Better support for multi-threading and thread-local storage (no tutorial yet)
- Hash tables (no tutorial yet)
- Random number generation improvements (basic discussion in [8.14 -- Generating random numbers using Mersenne Twister](https://www.learncpp.com/cpp-tutorial/generating-random-numbers-using-mersenne-twister/))
- Reference wrappers ([25.9 -- Object slicing](https://www.learncpp.com/cpp-tutorial/object-slicing/))
- Regular expressions (no tutorial yet)
- std::auto_ptr has been deprecated ([22.1 -- Introduction to smart pointers and move semantics](https://www.learncpp.com/cpp-tutorial/introduction-to-smart-pointers-move-semantics/))
- std::tuple (no tutorial yet)
- std::unique_ptr ([22.5 -- std::unique_ptr](https://www.learncpp.com/cpp-tutorial/stdunique_ptr/))





# 3 the comparisons of cpp versions



| 特性                              | C++11 | C++14 | C++17 | C++20 |
| --------------------------------- | ----- | ----- | ----- | ----- |
| auto                              | ✔     | ✔     | ✔     | ✔     |
| constexpr                         | ✔     | ✔     | ✔     | ✔     |
| lambda                            | ✔     | ✔     | ✔     | ✔     |
| range-based for                   | ✔     | ✔     | ✔     | ✔     |
| move semantics                    | ✔     | ✔     | ✔     | ✔     |
| variadic templates                | ✔     | ✔     | ✔     | ✔     |
| nullptr                           | ✔     | ✔     | ✔     | ✔     |
| Smart pointers                    | ✔     | ✔     | ✔     | ✔     |
| Forwarding references             | ✔     | ✔     | ✔     | ✔     |
| Type inference                    | ✔     | ✔     | ✔     | ✔     |
| Thread support                    | ✔     | ✔     | ✔     | ✔     |
| std::make_unique                  |       | ✔     | ✔     | ✔     |
| std::make_shared                  |       | ✔     | ✔     | ✔     |
| Binary literals                   |       | ✔     | ✔     | ✔     |
| Generic lambdas                   |       | ✔     | ✔     | ✔     |
| Variable templates                |       | ✔     | ✔     | ✔     |
| Structured bindings               |       |       | ✔     | ✔     |
| if init statements                |       |       | ✔     | ✔     |
| constexpr if                      |       |       | ✔     | ✔     |
| inline variables                  |       |       | ✔     | ✔     |
| Fold expressions                  |       |       | ✔     | ✔     |
| Class template argument deduction |       |       |       | ✔     |
| Concepts                          |       |       |       | ✔     |
| Modules                           |       |       |       | ✔     |
| Coroutines                        |       |       |       | ✔     |
| Ranges                            |       |       |       | ✔     |

> 注：✔ 表示该特性在该版本中已经被支持。

### 学习C++20可以按照以下步骤进行

