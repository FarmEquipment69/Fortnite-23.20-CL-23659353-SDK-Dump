// Class /Script/FortniteUI.AthenaMapLayerContainer
// Size: 0x510
class UAthenaMapLayerContainer : public UCommonActivatablePanelLegacy
{
	struct FVector2D NormalizedMapWidgetPosition; // 0x4e0 (0x10)
	class UAthenaMapLayer* AthenaMapLayer; // 0x4f0 (0x8)
	class UAthenaInGameMapIconsOverlay* AthenaMapIconsOverlayMain; // 0x4f8 (0x8)
	class UAthenaMapChallengeListView* ListViewNonLocationIconsBelowMap; // 0x500 (0x8)
	bool bConsumePointerOnTouchInteraction; // 0x508 (0x1)
	unsigned char padding_509[0x7]; // 0x509 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapLayerContainer.HandleNewContextualObjectives (Underlying native function: HandleNewContextualObjectives 0xa4af870)
	void HandleNewContextualObjectives(struct TArray<class UFortQuestItem*>& ContextualQuests); // (Final | Native | Protected | HasOutParms)
};

