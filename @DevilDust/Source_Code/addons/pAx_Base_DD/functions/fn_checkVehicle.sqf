disableSerialization;

_veharray = (position player) nearObjects ["Car", 5];


_car      = _veharray select 0;


_LFWheel  = _car getHitPointDamage "hitLFWheel";
_LF2Wheel = _car getHitPointDamage "hitLF2Wheel";
_RFWheel  = _car getHitPointDamage "hitRFWheel";
_RF2Wheel = _car getHitPointDamage "hitRF2Wheel";
_Engine   = _car getHitPointDamage "hitEngine";
_Body     = _car getHitPointDamage "hitBody";
_Fuel     = _car getHitPointDamage "hitFuel";

_LFWheelButton  = ((findDisplay 9001) displayCtrl 2600);
_RFWheelButton  = ((findDisplay 9001) displayCtrl 2601);
_LF2WheelButton = ((findDisplay 9001) displayCtrl 2602);
_RF2WheelButton = ((findDisplay 9001) displayCtrl 2603);

_EngineButton   = ((findDisplay 9001) displayCtrl 2604);
_BodyButton     = ((findDisplay 9001) displayCtrl 2605);
_FuelButton     = ((findDisplay 9001) displayCtrl 2606);



createDialog "pAx_ToolBox_dialog";

waitUntil {!isNull (findDisplay 9001)};

//first Button

if ( _LFWheel > 0.89 ) then
{
    _LFWheelButton ctrlSetTextColor [1,0,0,1];
} else {
            _LFWheelButton ctrlSetTextColor [_LFWheel,0.7,0,1];

       };


//second button
if ( _RFWheel == 0 ) then
{
    _RFWheelButton ctrlSetTextColor [0,1,0,1];
};
if ( _RFWheel > 0 && _RFWheel < 0.65) then
{
    _RFWheelButton ctrlSetTextColor [1,1,0,1];
};
if ( _RFWheel > 0.64 && _RFWheel < 0.9) then
{
    _RFWheelButton ctrlSetTextColor [1,0.5,0,1];
};
if ( _RFWheel > 0.89 ) then
{
    _RFWheelButton ctrlSetTextColor [1,0,0,1];
};

//third button
if ( _LF2Wheel > 0.89 ) then
{
    _LF2WheelButton ctrlSetTextColor [1,0,0,1];
} else {
            _LF2WheelButton ctrlSetTextColor [_LF2Wheel,0.7,0,1];

       };

//forth button
if ( _RF2Wheel > 0.89 ) then
{
    _RF2WheelButton ctrlSetTextColor [1,0,0,1];
} else {
            _RF2WheelButton ctrlSetTextColor [_RF2Wheel,0.7,0,1];

       };

//fifth button
if ( _Engine > 0.89) then
{
    ((findDisplay 9001) displayCtrl 2604) ctrlSetTextColor [1,0,0,1];
} else {
            ((findDisplay 9001) displayCtrl 2603) ctrlSetTextColor [_Engine,0.7,0,1];
       };



