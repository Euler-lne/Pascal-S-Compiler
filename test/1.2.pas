program nestedfunctions;
var
    inputnumber, result: integer;
    function outerfunction(x: integer): integer;
    var
        y: integer;

        function innerfunction(z: integer): integer;
        begin
            innerfunction := z * 2;
        end;

    begin
        y := innerfunction(x);
        outerfunction := y + 1;
    end;

begin

    result := outerfunction(inputnumber);
end.
