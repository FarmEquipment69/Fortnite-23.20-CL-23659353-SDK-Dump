// Class /Script/FortniteGame.FortContextualTutorial_StormForming
// Size: 0x108
class UFortContextualTutorial_StormForming : public UFortContextualTutorial
{
	bool bPreviousMapOpen; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x7]; // 0xf9 (0x7) 
	struct FTimerHandle* UpdateMapHandle; // 0x100 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortContextualTutorial_StormForming.HandleStartSkydivingForActivation (Underlying native function: HandleStartSkydivingForActivation 0x856dc08)
	void HandleStartSkydivingForActivation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortContextualTutorial_StormForming.HandlePawnLanded (Underlying native function: HandlePawnLanded 0x856da80)
	void HandlePawnLanded(struct FHitResult& Hit); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortContextualTutorial_StormForming.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x856d674)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Private | HasOutParms)
};

