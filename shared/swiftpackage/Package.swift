// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "KMMPOC",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "KMMPOC",
            targets: ["KMMPOC"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "KMMPOC",
            path: "./KMMPOC.xcframework"
        ),
    ]
)
