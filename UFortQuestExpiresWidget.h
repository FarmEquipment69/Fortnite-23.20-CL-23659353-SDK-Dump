// Class /Script/SaveTheWorldUI.FortQuestExpiresWidget
// Size: 0x2a0
class UFortQuestExpiresWidget : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UFortQuestItem> Item; // 0x290 (0x8)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.SetData (Underlying native function: SetData 0x735cf0c)
	void SetData(class UFortQuestItem*& InItem); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated (Underlying native function: OnQuestExpirationUpdated 0x7570aa8)
	void OnQuestExpirationUpdated(); // (Native | Event | Protected | BlueprintEvent)
};

