//Thanks to Kill Zone Kid at http://killzonekid.com/arma-rotating-weapon-holders/
off2 disableAI "MOVE";
off2 switchMove "Acts_HeliCargoTalking_loop";
off2 attachto [mrap, [1.2,1.5,-0.4]];
off2 setDir 65;


fnc_pwrotate = {
    private ["_turntable","_holder","_time","_dir"];
    _turntable = createVehicle [
        "Land_Can_V3_F",
        _this select 0,
        [],
        0,
        "CAN_COLLIDE"
    ];
    _turntable hideObject true;
    _holder = createVehicle [
        "WeaponHolderSimulated",
        _this select 0,
        [],
        0,
        "CAN_COLLIDE"
    ];
	 _holder2 = createVehicle [
        "WeaponHolderSimulated",
        _this select 0,
        [],
        0,
        "CAN_COLLIDE"
    ];
    _holder addItemCargo [_this select 1, 1];
	
	  _holder2 addItemCargo ["mhl_starterFluid_devildust", 1];
	  sleep 0.1;
	_holder addItemCargo ["mhl_Acetone_DevilDust", 1];
	
	_holder2 addItemCargo ["mhl_BatteryPackage_DevilDust", 1];
	 _holder setVectorDirAndUp [[90,90,0],[0,0,0]];
	 _holder setDir 90;
    _holder attachTo [_turntable, [0,0.4,0.5]];
	_holder2 attachTo [_turntable, [0,-0.4,0.5]];
   
    _time = time + 10000000;
    _dir = getDir _turntable;
    waitUntil {
        _dir = _dir + (
            if (_dir > 360) then [{-360},{0.2}]
        );
        _turntable setDir _dir;
		
        time > _time
    };
   // deleteVehicle _holder;
   // deleteVehicle _turntable;
};

h = getMarkerPos "a";

_tp = position mrap;

_ts = "pAx_Text_DevilDust" createVehicle [((_tp select 0)-2),((_tp select 1)+2),( _tp select 2)];



_pos = position campos;



_camera = "camera" camCreate [(_pos select 0),(_pos select 1), ((_pos select 2)+0.9)] ;
//_camera cameraEffect ["internal","back"];
_camera cameraEffect ["internal","back"];

0 setFog [0,0,0];
_camera camPrepareTarget position off;

cutRsc ["ExampleTitle","PLAIN"];

_camera camPrepareFOV 1;
_camera camCommitPrepared 0;

waitUntil { camCommitted _camera; };
_null = [
    campos modelToWorld [0,-0.25,0.5] ,
    "mhl_sudafed_devildust"
] spawn fnc_pwrotate;
sleep 2;
playSound3D ["A3\Sounds_F\arsenal\sfx\bullet_flyby\bullet_flyby10.wss", campos];
sleep .1;
playSound3D ["A3\Sounds_F\arsenal\sfx\bullet_flyby\bullet_flyby4.wss", campos];
sleep .1;
playSound3D ["A3\Sounds_F\arsenal\sfx\bullet_flyby\bullet_flyby9.wss", campos];
off switchMove "Acts_AidlPercMstpSlowWrflDnon_warmup05";

sleep 14.9;





