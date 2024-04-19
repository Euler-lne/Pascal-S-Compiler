program TestDefinition;

const
  c1 = 1;
  c2 = -3.14;
  c3 = 'a';
  c4 = -c1;

type 
  t1 = integer;
  t2 = array[1..3] of real;
  t3 = record x: integer; y: char; end;
  t4 = record m1: t2; m2: t3; end;

var
  v1: t1;
  v2: t2;
  v3: t3;
  v4: t4;

begin
  write('const-test');
  write(c1);
  write(c2);
  write(c3);
  write(c4);

  write;
  write('type and var - test');
  v1 := 2023;
  write(v1);

  v2[1] := 1.1;
  v2[2] := -2.2;
  v2[3] := 3.3;
  write(v2[1], ' ', v2[2], ' ', v2[3]);

  v3.x := 2023;
  v3.y := 't';
  write(v3.x, ' ', v3.y);

  v4.m1 := v2;
  v4.m2.x := v3.x;
  v4.m2.y := v3.y;
  write(v4.m2.x, ' ', v4.m2.y);
end.