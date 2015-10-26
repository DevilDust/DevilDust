
_partRef = _this select 0;


_veharray = (position player) nearObjects ["Car", 5];

_car = _veharray select 0;

if (isNil {_car})
    exitWith {};


if ("mhl_ToolBoxNew_DevilDust" in (items player)) then
{
     if (player in _car ) exitWith
        {
           hint "Get out the Car";
        };
    if (_partRef == "lf") then
        {
           _car setHitPointDamage ["hitLFWheel",0];
        };
    if (_partRef == "rf") then
        {
          _car setHitPointDamage ["hitRFWheel",0];
        };
    if (_partRef == "lr") then
        {
          _car setHitPointDamage ["hitLF2Wheel",0];
        };
    if (_partRef == "rr") then
        {
          _car setHitPointDamage ["hitRF2Wheel",0];
        };
    if (_partRef == "eng") then
        {
          _car setHitPointDamage ["hitEngine",0];
        };
    if (_partRef == "bod") then
        {
          _car setHitPointDamage ["hitBody",0];
        };
    if (_partRef == "fue") then
        {
          _car setHitPointDamage ["hitFuel",0];
        };
} else {
        SystemChat "You need a tool box to work on your vehicle";
       };