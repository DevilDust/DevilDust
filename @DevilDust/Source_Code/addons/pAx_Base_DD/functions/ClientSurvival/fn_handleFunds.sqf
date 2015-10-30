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
params ["_unit","_cMoney","_adjust"];

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
