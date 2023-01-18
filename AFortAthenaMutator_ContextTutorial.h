// Class /Script/FortniteGame.FortAthenaMutator_ContextTutorial
// Size: 0x390
class AFortAthenaMutator_ContextTutorial : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnShowButtonHighlight; // 0x330 (0x10)
	bool bEnableTutorials; // 0x340 (0x1)
	unsigned char unreflected_341[0x3]; // 0x341 (0x3) 
	int bContextTutorialMinimumLevelOverride; // 0x344 (0x4)
	class USoundCue* MessageSound; // 0x348 (0x8)
	int ConcurrentActiveContextualTutorials; // 0x350 (0x4)
	float CooldownTimeBetweenContextualTutorialTips; // 0x354 (0x4)
	struct TArray<class UFortContextualTutorialDefinition*> ContextualTutorialDefinitions; // 0x358 (0x10)
	float InCombatGraceTime; // 0x368 (0x4)
	float RayCastDistanceForNearbyEnemyCentimeter; // 0x36c (0x4)
	float WorldMarkerPadding; // 0x370 (0x4)
	struct FName WorldMarkerSockerName; // 0x374 (0x4)
	bool bEnableWorldMarker; // 0x378 (0x1)
	bool bEnableHighlight; // 0x379 (0x1)
	unsigned char unreflected_37a[0x6]; // 0x37a (0x6) 
	struct TArray<class UFortContextualTutorialController*> Controllers; // 0x380 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_ContextTutorial.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x84a6b60)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Private)
};

