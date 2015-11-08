 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  fn_createServerTriggers.sqf
 /// #PARAMS  :  0 - TriggerName - String
 ///             1 - Trigger Position - Array
 /// #EXECUTE : Call at precompile
 /// #PURPOSE :  Create server triggers
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 17, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
private["_trigName", "_trigPos"];

 _trigName = param [0, ""];
 _trigPos  = param [1, [0,0,0]];