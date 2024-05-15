program TestOperator;
var
  a, b: boolean;
  c, d: integer;
  e, f: real;
  g, h: char;
begin
  a := true;
  b := false;
  c := 10;
  d := 3;
  e := 10.5;
  f := 2.5;
  g := 'a';
  h := 'b';

  write('bool operand');
  write(a and b);
  write(a or b);
  write(not a);
  write(a = b);
  write(a <> b);

  write('int operand');
  write(+c);
  write(-c);
  write(c + d);
  write(c - d);
  write(c * d);
  write(c / d);
  write(c mod d);
  write(c div d);
  write(c = d);
  write(c <> d);
  write(c < d);
  write(c > d);
  write(c <= d);
  write(c >= d);

  write('real operand');
  write(e + f);
  write(e - f);
  write(e * f);
  write(e / f);
  write(e = f);
  write(e <> f);
  write(e < f);
  write(e > f);
  write(e <= f);
  write(e >= f);

  write('char operand');
  write(g = h);
  write(g <> h);

  write('real int operand');
  write(e + c);
  write(e - c);
  write(e * c);
  write(e / c);
  write(e = c);
  write(e <> c);
  write(e < c);
  write(e > c);
  write(e <= c);
  write(e >= c);

  write('int real operand');
  write(c + e);
  write(c - e);
  write(c * e);
  write(c / e);
  write(c = e);
  write(c <> e);
  write(c < e);
  write(c > e);
end.