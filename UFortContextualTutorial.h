// Class /Script/FortniteGame.FortContextualTutorial
// Size: 0xf8
class UFortContextualTutorial : public UObject
{
	unsigned char unreflected_28[0x80]; // 0x28 (0x80) 
	struct TWeakObjectPtr<class AActor> WeakMarkerActor; // 0xa8 (0x8)
	struct FText MarkerText; // 0xb0 (0x18)
	struct TWeakObjectPtr<class UFortHighlightObjectInWorldComponent> MarkerHighlightComponent; // 0xc8 (0x8)
	class UFortContextualTutorialDefinition* TutorialDefinition; // 0xd0 (0x8)
	unsigned char unreflected_d8[0x8]; // 0xd8 (0x8) 
	class AFortPlayerController* OwnerController; // 0xe0 (0x8)
	unsigned char padding_e8[0x10]; // 0xe8 (0x10)
};

