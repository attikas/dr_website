<template>
    <div>
        <div style="width: 100%;height: 150px;" class="bgsecond">
            <div class="container">
                Everything you want to see is here
            </div>
        </div>
        <div class="container">
            doc
            <button type="button" @click="handleClick">Get User Info</button> {{this.respData}}
        </div>        
    </div>
</template>

<script>
    import axios from 'axios';
    export default {
        name: "get-request",
        data() {
            return {
                respData: null
            };
        },
        head: {
            title: 'Documentation',
            titleTemplate: '%s_drogon_C++_webFramework',
            meta: [
                { charset: 'utf-8' },
                { name: 'viewport', content: 'width=device-width, initial-scale=1' },
                { hid: "Keywords", name: 'Keywords', content: 'C++,webFramework' },
                { hid: 'description', name: 'description', content: 'C++,webFramework' }
            ]
        }  
        , async created () {
            axios.get("http://localhost:8092/auth")
                .then(response => {
                    this.respData = response.data;
                })
                .catch(error => {
                    this.errorMessage = error.message;
                    console.error("There was an error!", error);
                });            
        },
        methods: {
  	        handleClick: function(){
                console.log(this.respData);
            }
        }
    };

</script>