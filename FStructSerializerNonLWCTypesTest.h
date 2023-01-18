// ScriptStruct /Script/Serialization.StructSerializerNonLWCTypesTest
// Size: 0x220
struct FStructSerializerNonLWCTypesTest
{
	struct FVector3f Vector; // 0x0 (0xc)
	struct FVector2f* Vector2D; // 0xc (0x8)
	unsigned char unreflected_14[0xc]; // 0x14 (0xc) 
	struct FVector4f Vector4; // 0x20 (0x10)
	struct FMatrix44f Matrix; // 0x30 (0x40)
	struct FPlane4f Plane; // 0x70 (0x10)
	struct FQuat4f Quat; // 0x80 (0x10)
	struct FRotator3f Rotator; // 0x90 (0xc)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FTransform3f Transform; // 0xa0 (0x30)
	struct FBox3f Box; // 0xd0 (0x1c)
	struct FBox2f Box2D; // 0xec (0x14)
	struct FBoxSphereBounds3f BoxSphereBounds; // 0x100 (0x1c)
	struct FOrientedBoxFloat OrientedBox; // 0x11c (0x3c)
	float float; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	double Double; // 0x160 (0x8)
	struct TArray<struct FVector3f> VectorArray; // 0x168 (0x10)
	struct TMap<struct FString, struct FVector3f> StrToVec; // 0x178 (0x50)
	struct TSet<struct FVector3f> VectorSet; // 0x1c8 (0x50)
	unsigned char padding_218[0x8]; // 0x218 (0x8)
};

