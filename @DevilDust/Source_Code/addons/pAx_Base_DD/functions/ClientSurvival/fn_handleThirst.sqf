//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  fn_handleThirst.sqf
/// #PARAMS  :  0 - Player Unit   - Mandatory
///
/// #EXECUTE :  called in fn_handleLiving.sqf
/// #PURPOSE :  Controls the effects of thirst
/// #Return : Thirst Variable - Scalar
/// #AUTHOR  : pAxton
/// #DATE    : Oct. 4, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
disableSerialization;
//private["_unit","_cnv"];

_unit           = _this select 0;
_hasEffects     = false;
_activateEffect = false;
_cThirst        = _this select 1;
playerWetEffect = _this select 2;

if ((_cThirst < 2) && !_hasEffects) then
  {
    _activateEffect = true;
  };
if (_activateEffect && !_hasEffects) then
  {
    _hasEffects = true;
  };
if (_hasEffects && _activateEffect) then
  {
    _activateEffect = false;
   // playerWetEffect ppEffectEnable true;
    //playerWetEffect ppEffectAdjust [.0001,.0002,.0001,.0001,.0001,.0001,.001,0,0,0,0,0,0,0,0];
    systemChat ( localize "str_pAx_Thirsty" );
    0 setFog [0.9,0,700];
  };
if ((_cThirst > 2) && _hasEffects) then
  {
    uiSleep 3;
    //playerWetEffect ppEffectEnable false;
    //ppEffectDestroy playerWetEffect;
    0 setFog [0.08,0.03,100];
    _hasEffects = false;
  };
_cThirst = _cThirst - 0.1;

_cThirst
