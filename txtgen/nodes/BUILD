cc_library(
    name = "nodes",
    srcs = glob(["src/*.cpp"]),
    hdrs = glob([
        "*.h",
        "prihdr/*.h",
    ]),
    copts = ["-Itxtgen/nodes/prihdr/"],
)

cc_test(
    name = "unit",
    srcs = glob([
        "tests/*.cpp",
        "tests/src/**/*.cpp",
    ]),
    deps = [
        ":nodes",
        "@gtest",
    ],
)
