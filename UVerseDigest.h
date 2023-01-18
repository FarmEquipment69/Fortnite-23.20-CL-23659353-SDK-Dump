// Class /Script/Solaris.VerseDigest
// Size: 0x50
class UVerseDigest : public UObject
{
	struct TArray<unsigned char> DigestCode; // 0x28 (0x10)
	struct FString ProjectName; // 0x38 (0x10)
	enum EVerseDigestVariant Variant; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

