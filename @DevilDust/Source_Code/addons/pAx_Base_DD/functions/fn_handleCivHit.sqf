//target: Object - Object that got fired at
//shooter: Object - Unit that fired shot
//bullet: Object - Object that was fired
//position: Position3D - Position the bullet impacted
//velocity: Vector - 3D speed at which bullet impacted
//selection: Array - Array of Strings with named selection of the object that were hit.
//ammo: Array - Ammo info: [hit value, indirect hit value, indirect hit range, explosive damage, ammo class name] OR, if there is no shot object: [impulse value on object collided with,0,0,0]
//direction: Vector3D - vector that is orthogonal (perpendicular) to the surface struck. For example, if a wall was hit, vector would be pointing out of the wall at a 90 degree angle
//radius: Number - radius (size) of component hit
//surface: String - surface type struck
//direct: Boolean - true if object was directly hit, false if it was hit by indirect/splash damage

_target = _this select 0;

[_target] call pAx_fnc_targetHit;


