// Class /Script/FortniteGame.FortTheaterCamera
// Size: 0x9f0
class AFortTheaterCamera : public AFortCameraBase
{

	/* Functions */

	// Function /Script/FortniteGame.FortTheaterCamera.SetTileFocus (Has no native function)
	void SetTileFocus(class AFortTheaterMapTile*& TargetTile); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTheaterCamera.LimitToTheater (Underlying native function: LimitToTheater 0x8a07e14)
	struct FVector LimitToTheater(struct FVector& DesiredPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

