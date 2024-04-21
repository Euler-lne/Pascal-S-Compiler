program TestRecord;
var
  rec1: record x: integer; y: char; end;
  rec2: record x: integer; y: char; end; 
  rec3: record x: record x1: integer; x2: real; end; y: char; end;
begin

  rec1.x := 2023;
  rec1.y := 't';
  rec2.x := rec1.x;
  rec2.y := rec1.y;
  write(rec2.x);
  write(rec2.y);


  rec3.x.x1 := 2023;
  rec3.x.x2 := 3.14;
  rec3.y := 't';
  write(rec3.x.x1);
  write(rec3.x.x2);
  write(rec3.y);
end.