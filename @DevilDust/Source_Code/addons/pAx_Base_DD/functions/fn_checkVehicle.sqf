disableSerialization;

_veharray = (position player) nearObjects ["Car", 10];


_car = _veharray select 0;
_control = 2600;

_LFWheel = _car getHitPointDamage "hitLFWheel";
_LF2Wheel = _car getHitPointDamage "hitLF2Wheel";
_RFWheel = _car getHitPointDamage "hitRFWheel";
_RF2Wheel = _car getHitPointDamage "hitRF2Wheel";

createDialog "pAx_ToolBox_dialog";

waitUntil {!isNull (findDisplay 9001)};

//first Button
if ( _LFWheel == 0 ) then
{
    ((findDisplay 9001) displayCtrl 2600) ctrlSetTextColor [0,1,0,1];
};
if ( _LFWheel > 0 && _LFWheel < 0.65) then
{
    ((findDisplay 9001) displayCtrl 2600) ctrlSetTextColor [1,1,0,1];
};
if ( _LFWheel > 0.64 && _LFWheel < 0.9) then
{
    ((findDisplay 9001) displayCtrl 2600) ctrlSetTextColor [1,0.5,0,1];
};
if ( _LFWheel > 0.89 ) then
{
    ((findDisplay 9001) displayCtrl 2600) ctrlSetTextColor [1,0,0,1];
};


//second button
if ( _RFWheel == 0 ) then
{
    ((findDisplay 9001) displayCtrl 2601) ctrlSetTextColor [0,1,0,1];
};
if ( _RFWheel > 0 && _RFWheel < 0.65) then
{
    ((findDisplay 9001) displayCtrl 2601) ctrlSetTextColor [1,1,0,1];
};
if ( _RFWheel > 0.64 && _RFWheel < 0.9) then
{
    ((findDisplay 9001) displayCtrl 2601) ctrlSetTextColor [1,0.5,0,1];
};
if ( _RFWheel > 0.89 ) then
{
    ((findDisplay 9001) displayCtrl 2601) ctrlSetTextColor [1,0,0,1];
};





