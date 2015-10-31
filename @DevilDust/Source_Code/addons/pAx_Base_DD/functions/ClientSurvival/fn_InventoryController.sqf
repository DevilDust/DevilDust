disableSerialization;
scopeName "Main";
_player = _this select 0;
_listBoxArray = [0,1,2,3,4];
_MethLabIndex = 0;
_MethLab = "Meth Lab";
_inventoryItems = ['mhl_MoronSalt_DevilDust','mhl_StarterFluid_DevilDust','mhl_Acetone_DevilDust','mhl_BatteryPackage_DevilDust', 'mhl_Sudafed_DevilDust'];
_readyToMake = [0,0,0,0,0];
enableButton = 0;

_control = 1500;


for [{_i = 0}, {_i < 6}, { _i = _i + 1}] do {
    if ((_inventoryItems select _i) in (items player + assignedItems player)) then {
        _readyToMake set [_i, 1];
        _item = str (_inventoryItems select _i);
       // _index = _listBoxArray select _i;
       // _index = lbAdd [1500, _item];
       // hint str(_i);
    } else {
            _readyToMake set [_i, 0];
    }
};

for [{_i = 0}, {_i < 6}, { _i = _i +1}] do {
    if (_readyToMake select _i == 1) then {
        enableButton = enableButton + 1;
    } else {
        enableButton = enableButton - 1;
    };
};

if (enableButton == 5) then {
       // ctrlSetText [1505, "Build Lab"];
       true breakOut "Main";
} else { false breakOut "Main"};

//waitUntil {!isNull (findDisplay 9000)};
//_MethLabIndex = lbAdd [1500, _MethLab];
//_MoneyIndex = lbAdd [1500, _ClientMoney];

