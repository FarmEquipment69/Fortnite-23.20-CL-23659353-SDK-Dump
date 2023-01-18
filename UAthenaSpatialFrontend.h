// Class /Script/FortniteUI.AthenaSpatialFrontend
// Size: 0x438
class UAthenaSpatialFrontend : public UCommonActivatableWidget
{
	class UUserWidget* PersistentScreenWidget; // 0x3a8 (0x8)
	struct FGameplayTagContainer HidePersistentScreenCameraTags; // 0x3b0 (0x20)
	bool bHideCameraSpatialScreenOnTransistion; // 0x3d0 (0x1)
	enum EFortBangType BangType; // 0x3d1 (0x1)
	unsigned char unreflected_3d2[0x6]; // 0x3d2 (0x6) 
	class UCommonLazyWidget* LazyActiveScreen; // 0x3d8 (0x8)
	struct FGameplayTag StartingActiveCamera; // 0x3e0 (0x4)
	struct FGameplayTag ChallengesCameraTag; // 0x3e4 (0x4)
	struct FDataTableRowHandle SelectObjectInputAction; // 0x3e8 (0x10)
	unsigned char unreflected_3f8[0x4]; // 0x3f8 (0x4) 
	bool bEnableSpatialInputPreprocessingByDefault; // 0x3fc (0x1)
	unsigned char unreflected_3fd[0x3]; // 0x3fd (0x3) 
	class UFortGameStateComponent_EventLevel* EventGameStateComponent; // 0x400 (0x8)
	unsigned char padding_408[0x30]; // 0x408 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialFrontend.OnSelectedNavObjectChanged (Has no native function)
	void OnSelectedNavObjectChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialFrontend.OnEventLevelTransitionComplete (Has no native function)
	void OnEventLevelTransitionComplete(struct FGameplayTag& ActiveCamera); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialFrontend.OnEventLevelTransitionBegin (Has no native function)
	void OnEventLevelTransitionBegin(struct FGameplayTag& TargetCamera, class AFortEventLevelNavigationActor*& TargetNavActor); // (Event | Protected | HasOutParms | BlueprintEvent)
};

