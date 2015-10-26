

_action = _this select 0;


if (_action == "drink") then
    {
        player removeItem "mhl_WaterBottle_DevilDust";
        [player, 100] call pAx_fnc_setThirst;
    };