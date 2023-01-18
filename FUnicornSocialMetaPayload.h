// ScriptStruct /Script/FortniteGame.UnicornSocialMetaPayload
// Size: 0xa8
struct FUnicornSocialMetaPayload
{
	struct TMap<enum EUnicornSocialFeatures, float> UCRNFeatureScores; // 0x0 (0x50)
	struct TSet<struct FUniqueNetIdRepl> UCRNFriendsInvolved; // 0x50 (0x50)
	float UCRNSocialScore; // 0xa0 (0x4)
	unsigned char padding_a4[0x4]; // 0xa4 (0x4)
};

