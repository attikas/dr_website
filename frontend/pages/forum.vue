<template>
    <div>
        <div style="width: 100%;height: 150px;" class="bgsecond">
            <div class="container">
                Everything you want to see is here
            </div>
        </div>
        <div class="container ">
            forum
        </div>
    </div>

</template>

<script>
export default {
    head: {
		title: 'Blog',
        titleTemplate: '%s_drogon_C++_webFramework',
        meta: [
            { charset: 'utf-8' },
			{ name: 'viewport', content: 'width=device-width, initial-scale=1' },
			{ hid: "Keywords", name: 'Keywords', content: 'C++,webFramework' },
            { hid: 'description', name: 'description', content: 'C++,webFramework' }
        ]
    },
    async asyncData ({ req, res }) {
    // Please check if you are on the server side
    // Use req and res
    if (process.server) {
      return { host: req.headers.host }
    }

    return {}
  }
    
}
</script>