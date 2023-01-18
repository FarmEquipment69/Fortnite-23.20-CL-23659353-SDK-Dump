// Class /Script/FortniteAI.FortAthenaAIEvaluator_DormantUntilPhase
// Size: 0xe8
class UFortAthenaAIEvaluator_DormantUntilPhase : public UFortAthenaAIEvaluator
{
	struct FScalableFloat bIsEnabled; // 0x58 (0x28)
	bool bDisabledInCreative; // 0x80 (0x1)
	enum EAthenaGamePhaseStep RequiredGamePhaseStep; // 0x81 (0x1)
	unsigned char unreflected_82[0x6]; // 0x82 (0x6) 
	struct FScalableFloat DelayAfterPhase; // 0x88 (0x28)
	struct FScalableFloat RandomDeviationAfterPhase; // 0xb0 (0x28)
	unsigned char padding_d8[0x10]; // 0xd8 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIEvaluator_DormantUntilPhase.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0xa3acb6c)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Private | HasOutParms)
};

