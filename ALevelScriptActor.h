// Class /Script/Engine.LevelScriptActor
// Size: 0x290
class ALevelScriptActor : public AActor
{
	unsigned char bInputEnabled; // 0x288 (0x1)
	unsigned char padding_289[0x7]; // 0x289 (0x7)

	/* Functions */

	// Function /Script/Engine.LevelScriptActor.WorldOriginLocationChanged (Has no native function)
	void WorldOriginLocationChanged(struct FIntVector& OldOriginLocation, struct FIntVector& NewOriginLocation); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.LevelScriptActor.SetCinematicMode (Underlying native function: SetCinematicMode 0x9e3244c)
	void SetCinematicMode(bool& bCinematicMode, bool& bHidePlayer, bool& bAffectsHUD, bool& bAffectsMovement, bool& bAffectsTurning); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelScriptActor.RemoteEvent (Underlying native function: RemoteEvent 0x9e31438)
	bool RemoteEvent(struct FName& EventName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelScriptActor.LevelReset (Has no native function)
	void LevelReset(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)
};

