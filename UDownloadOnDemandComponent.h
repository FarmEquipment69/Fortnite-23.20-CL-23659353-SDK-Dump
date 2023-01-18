// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent
// Size: 0x1d0
class UDownloadOnDemandComponent : public UControllerComponent
{
	unsigned char unreflected_a0[0x108]; // 0xa0 (0x108) 
	class UDownloadOnDemandPlot* Plot; // 0x1a8 (0x8)
	struct TArray<class UDownloadOnDemandProject*> UserOwnedProjects; // 0x1b0 (0x10)
	struct TArray<class UDownloadOnDemandProjectContent*> ShelvedContents; // 0x1c0 (0x10)

	/* Functions */

	// Function /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived (Underlying native function: HandleMnemonicsFromValkyriePaletteProviderReceived 0x77d52d4)
	void HandleMnemonicsFromValkyriePaletteProviderReceived(struct TArray<struct FString>& Mnemonics); // (Final | Native | Private | HasOutParms)
};

