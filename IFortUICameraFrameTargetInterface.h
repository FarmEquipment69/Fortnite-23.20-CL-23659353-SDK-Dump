// Class /Script/FortniteGame.FortUICameraFrameTargetInterface
// Size: 0x28
class IFortUICameraFrameTargetInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortUICameraFrameTargetInterface.SetFrameTargetSettingsChangedDelegate (Underlying native function: SetFrameTargetSettingsChangedDelegate 0x86703b0)
	void SetFrameTargetSettingsChangedDelegate(struct FDelegate& Delegate); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortUICameraFrameTargetInterface.GetZoomedOutCameraFramingSettings (Underlying native function: GetZoomedOutCameraFramingSettings 0x866e5f8)
	struct FFortUICameraFrameTargetSettings GetZoomedOutCameraFramingSettings(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortUICameraFrameTargetInterface.GetZoomedInCameraFramingSettings (Underlying native function: GetZoomedInCameraFramingSettings 0x866e59c)
	struct FFortUICameraFrameTargetSettings GetZoomedInCameraFramingSettings(); // (Native | Event | Public | BlueprintEvent)
};

