open Jest;

describe("gof", () => {
  open Expect;
  test("should fail", () => {
    expect(Game.gof()) |> toBe(false);
  });
});
