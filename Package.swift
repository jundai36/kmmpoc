// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "CxKmmSDK",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "CxKmmSDK",
            targets: ["CxKmmSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "CxKmmSDK",
            path: "./CxKmmSDK.xcframework"
        ),
    ]
)
