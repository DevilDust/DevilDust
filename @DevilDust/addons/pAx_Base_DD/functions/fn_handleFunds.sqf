//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  fn_handleFunds.sqf
/// #PARAMS  :  0 - Player unit      - Mandatory
///             1 - Current Money    - Optional
///             2 - Amount to adjust - Optional
/// #EXECUTE :  call by TAG used in various locations
/// #PURPOSE :  Return local variable or Do math function with local variable "pAx_ClientMoney"
///
/// #AUTHOR  : pAxton
/// #DATE    : Oct. 3, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
scopeName "Main";
//private["_unit","_cMoney","_adjust"];

_unit   = _this select 0;
_cMoney = _this select 1;
_adjust = _this select 2;
_unit = vehicle _unit;


if ((isNil "_adjust")  &&  (isNil "_cMoney")) then
    {
         _return =  _unit getVariable "pAx_ClientMoney";
         _return breakOut "Main";
    };
if (!(isNil "_adjust")  &&  (!(isNil "_cMoney"))) then
    {
        _cMoney = _cMoney + _adjust;
        _unit setVariable ["pAx_ClientMoney", _cMoney];
        "NoError" breakOut "Main";
    };
if ((isNil "_cMoney")  && (isNil "_adjust")  && (isNil "_unit")) then
    {
        "Error" breakOut "Main";
    };
