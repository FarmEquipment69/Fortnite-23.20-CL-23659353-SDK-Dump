// Class /Script/FortniteUI.AthenaMarkerDetails
// Size: 0x2e8
class UAthenaMarkerDetails : public UFortHUDElementWidget
{
	class UAthenaMarkerPointer* MarkerPointer; // 0x2d0 (0x8)
	class UFortMarkerDetailsTable* DetailsTable; // 0x2d8 (0x8)
	class UFortWorldMarker* FortWorldMarker; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMarkerDetails.UpdateMarkerData (Has no native function)
	void UpdateMarkerData(struct FFortWorldMarkerData& MarkerData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMarkerDetails.UpdateMarkerAction (Has no native function)
	void UpdateMarkerAction(enum EFortMarkerActions& MarkerAction); // (Event | Protected | BlueprintEvent)
};

