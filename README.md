# Tdd.TimeBookings (C++)

TDD workshop template for C++ using Boost.Test, set up for Visual Studio 2026.

## Running the tests

1. Open `Tdd.sln` in Visual Studio 2026.
2. Build the solution. The first build restores the Boost NuGet packages into
   `packages/` at the solution root and is slow; subsequent builds are fast.
   - If automatic NuGet restore is disabled, right-click the solution →
     **Restore NuGet Packages** before building.
3. Run the tests:
   - Press **F5** (or **Ctrl+F5**) to run the test executable directly, or
   - Open **Test Explorer** (Test → Test Explorer) — the Boost.Test adapter
     picks up `BOOST_AUTO_TEST_CASE` entries automatically.
