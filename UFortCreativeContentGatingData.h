// Class /Script/FortniteGame.FortCreativeContentGatingData
// Size: 0x90
class UFortCreativeContentGatingData : public UDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	class UFortCreativeTagFilter* CabinFilter; // 0x38 (0x8)
	struct TMap<enum EFortContentRating, class UFortCreativeTagFilter*> RatingToFilterMap; // 0x40 (0x50)
};

