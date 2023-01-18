// ScriptStruct /Script/Serialization.StructSerializerLWCTypesTest
// Size: 0x360
struct FStructSerializerLWCTypesTest
{
	struct FVector Vector; // 0x0 (0x18)
	struct FVector2D Vector2D; // 0x18 (0x10)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FVector4 Vector4; // 0x30 (0x20)
	struct FMatrix Matrix; // 0x50 (0x80)
	struct FPlane Plane; // 0xd0 (0x20)
	struct FQuat Quat; // 0xf0 (0x20)
	struct FRotator Rotator; // 0x110 (0x18)
	unsigned char unreflected_128[0x8]; // 0x128 (0x8) 
	struct FTransform Transform; // 0x130 (0x60)
	struct FBox Box; // 0x190 (0x38)
	struct FBox2D Box2D; // 0x1c8 (0x28)
	struct FBoxSphereBounds BoxSphereBounds; // 0x1f0 (0x38)
	struct FOrientedBox OrientedBox; // 0x228 (0x78)
	float float; // 0x2a0 (0x4)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	double Double; // 0x2a8 (0x8)
	struct TArray<struct FVector> VectorArray; // 0x2b0 (0x10)
	struct TMap<struct FString, struct FVector> StrToVec; // 0x2c0 (0x50)
	struct TSet<struct FVector> VectorSet; // 0x310 (0x50)
};

