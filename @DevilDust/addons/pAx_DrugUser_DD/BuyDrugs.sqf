 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  BuyDrugs.sqf
 /// #PARAMS  :  0 - Druguser
 ///             1 - Player
 /// #EXECUTE :  CALL used throughout Mod
 /// #PURPOSE :  TESTING, THIS SCRIPT WILL HAVE A MASSIVE MAKE OVER
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 3, 2015
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////

_target = _this select 0;
_caller = _this select 1;
_ID = _this select 2;
_args = _this select 3;

_rdme = floor (random 10);



//_target switchMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";

_caller switchMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
if ("mhl_Baggy_DevilDust" in (items player + assignedItems player)) then
    {
        _caller unassignItem "mhl_Baggy_DevilDust";
        _caller removeItem "mhl_Baggy_DevilDust";
        pAx_ClientMoney = pAx_ClientMoney + 100;
        _target removeAction _ID;
    };

sleep 10;

//_target playMove "Acts_Abuse_Akhanteros";