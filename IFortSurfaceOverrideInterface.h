// Class /Script/FortniteGame.FortSurfaceOverrideInterface
// Size: 0x28
class IFortSurfaceOverrideInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortSurfaceOverrideInterface.GetSurfaceType (Underlying native function: GetSurfaceType 0x20b4858)
	struct TEnumAsByte<EPhysicalSurface> GetSurfaceType(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSurfaceOverrideInterface.GetFootstepSurfaceData (Has no native function)
	class UFortFootstepSurfaceData* GetFootstepSurfaceData(); // (Event | Public | BlueprintEvent | Const)
};

