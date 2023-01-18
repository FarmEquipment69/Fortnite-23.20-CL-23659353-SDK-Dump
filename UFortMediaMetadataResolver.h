// Class /Script/FortniteGame.FortMediaMetadataResolver
// Size: 0x128
class UFortMediaMetadataResolver : public UActorComponent
{
	struct FMulticastInlineDelegate OnSuccess; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0xb0 (0x10)
	struct FMulticastInlineDelegate MetadataResultExt; // 0xc0 (0x10)
	class UFortMediaCDNHostnames* CDNHostNames; // 0xd0 (0x8)
	unsigned char padding_d8[0x50]; // 0xd8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaMetadataResolver.GetBlurl (Underlying native function: GetBlurl 0x8ab4618)
	bool GetBlurl(struct FString& InVUID, bool& bInBlurlLive); // (Final | Native | Public | BlueprintCallable)
};

