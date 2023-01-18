// Class /Script/FortniteGame.FortLoadingConfig
// Size: 0x1800
class UFortLoadingConfig : public UDataAsset
{
	struct FFortSubGameLoadingScreen LoadingScreenFallback; // 0x30 (0x620)
	struct FFortSubGameLoadingScreen LoadingScreens[0x2]; // 0x650 (0x620) (ARRAY) 
	struct FFortEarlyAcessLoadingScreen LoadingScreenEA; // 0x1290 (0x3d0)
	struct FSlateBrush LoadingScreenMissionBackground; // 0x1660 (0xc0)
	struct FSlateBrush LoadingScreenTipBackground; // 0x1720 (0xc0)
	struct TArray<struct FFortPSALoadingScreen> PSALoadingScreens; // 0x17e0 (0x10)
	class USoundBase* LoadingMusic; // 0x17f0 (0x8)
	unsigned char padding_17f8[0x8]; // 0x17f8 (0x8)
};

