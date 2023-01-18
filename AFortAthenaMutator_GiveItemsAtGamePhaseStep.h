// Class /Script/FortniteGame.FortAthenaMutator_GiveItemsAtGamePhaseStep
// Size: 0x348
class AFortAthenaMutator_GiveItemsAtGamePhaseStep : public AFortAthenaMutator
{
	enum EAthenaGamePhaseStep PhaseToGiveItems; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct TArray<struct FItemsToGive> ItemsToGive; // 0x338 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GiveItemsAtGamePhaseStep.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x84cfb70)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)
};

