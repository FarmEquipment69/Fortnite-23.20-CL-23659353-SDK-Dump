// Class /Script/FortniteGame.AthenaMusicPackItemDefinition
// Size: 0x808
class UAthenaMusicPackItemDefinition : public UAthenaCosmeticItemDefinition
{
	struct TWeakObjectPtr<class USoundBase> FrontEndLobbyMusic; // 0x7b0 (0x28)
	struct TWeakObjectPtr<class UTexture2D> CoverArtImage; // 0x7d8 (0x28)
	bool bIsDefaultMusicPack; // 0x800 (0x1)
	unsigned char unreflected_801[0x3]; // 0x801 (0x3) 
	float MusicPreviewStartTime; // 0x804 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.AthenaMusicPackItemDefinition.GetCoverArt (Underlying native function: GetCoverArt 0x2a22174)
	struct TWeakObjectPtr<class UTexture2D> GetCoverArt(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

