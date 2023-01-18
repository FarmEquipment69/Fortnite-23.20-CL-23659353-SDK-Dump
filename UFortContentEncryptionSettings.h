// Class /Script/FortniteGame.FortContentEncryptionSettings
// Size: 0x60
class UFortContentEncryptionSettings : public UDeveloperSettings
{
	struct TArray<struct FFortContentEncryptionCollection> Collections; // 0x30 (0x10)
	struct TArray<struct FName> EncryptedGameFeaturePluginNames; // 0x40 (0x10)
	struct TArray<struct FString> BackendURLs; // 0x50 (0x10)
};

