<template>
  <div>
      <div style="width: 100%;">
        <div class="bgsecond banner">
            <div class="doc-title mdui-typo-display-1 " align="center " style="margin-top: 80px; color: #FFF; ">
                C++ powerful web framework build with C++14/17
            </div>
            <div style="margin-top: 50px; " align="center ">
                <a href="javascript:void(0) " class="btn btn-outline-warning">github</a>
                <a href="javascript:void(0) " class="btn btn-outline-warning">gitee</a>
                <button type="button" class="btn btn-outline-warning">Get User</button>
            </div>
        </div>
    </div>
    <div class="container">
        <article class="mdui-typo">
            <h2 class=" mdui-text-color-theme">Drogon</h2>
            <p><strong>Drogon</strong> is an Http application framework based on C++14/17. Using Drogon, you can easily use C++ to build various types of Web application server programs. This version library is github on
                <a href="https://github.com/an-tao/drogon">Drogon engineering</a>Mirror library <strong>Drogon</strong> is the name of a dragon in the American drama "Game of Thrones" that the author likes very much (Chinese translation is Zhuo Geng). It is related to dragon but is not a mistake of dragon. In order not to cause unnecessary misunderstanding, I will explain it here.
                </p>
            <p>Drogon is a cross-platform framework, it supports Linux, also supports macOS, FreeBSD, and Windows. Its main features are as follows:</p>
            <ul class="mdui-list">
                <li class="mdui-list-item">Use a non-blocking I/O network lib based on epoll (kqueue under MacOS/FreeBSD) to provide high-concurrency, high-performance network IO;<a href="https://www.techempower.com/benchmarks/#section=data-r19&amp;hw=ph&amp;test=composite" rel="nofollow">TFB Tests Results</a>；</li>
                <li class="mdui-list-item">Provide a completely asynchronous programming mode;</li>
                <li class="mdui-list-item">Support Http1.0/1.1 (server side and client side);</li>
                <li class="mdui-list-item">Based on template, a simple reflection mechanism is implemented to completely decouple the main program framework, controllers and views.</li>
                <li class="mdui-list-item">Support cookies and built-in sessions;</li>
                <li class="mdui-list-item">Support back-end rendering, the controller generates the data to the view to generate the Html page, the view is described by a "JSP-like" CSP file, the C++ code is embedded into the Html page by the CSP tag, and the drogon command-line tool automatically generates the C++ code file for compilation;</li>
                <li class="mdui-list-item">Support view page dynamic loading (dynamic compilation and loading at runtime);</li>
                <li class="mdui-list-item">Provide a convenient and flexible routing solution from the path to the controller handler;</li>
                <li class="mdui-list-item">Support filter chains to facilitate the execution of unified logic (such as login verification, Http Method constraint verification, etc.) before controllers;</li>
                <li class="mdui-list-item">Support https (based on OpenSSL);</li>
                <li class="mdui-list-item">Support WebSocket (server side and client side);</li>
                <li class="mdui-list-item">Support JSON format request and response, very friendly to the Restful API application development;</li>
                <li class="mdui-list-item">Support file download and upload;</li>
                <li class="mdui-list-item">Support pipelining;</li>
                <li class="mdui-list-item">Support gzip compression transmission;</li>
            </ul>
        </article>
    </div>
</div>
</template>

<script>

import axios from 'axios'

export default {
  name: 'index',
  data(){
		return {
			lang: "en-US",
			titleAppend: "frame",
		}
	},
  html(){
    return{
      html: "lang=en-US",
    }
  },
  head() {
    return{
      title: 'drogon',
      titleTemplate: '%s_powerful C++ web '+this.titleAppend,
      meta: [
          { charset: 'utf-8' },
          { name: 'viewport', content: 'width=device-width, initial-scale=1' },
          {hid: "Keywords", name:'Keywords', content:'IT outsourcing, java outsourcing, php outsourcing, Android outsourcing, ios outsourcing, python outsourcing, golang outsourcing, IT blog, java blog, php blog, Android blog, ios Blog, python blog, golang blog' },
          {hid:'description', name:'description', content:'Different programming languages ​​are just the interpretation of the same idea under different symbols. When dynamic languages ​​can be written exquisitely and neatly, static languages ​​can be used smartly , When the gods change, whenever the inspiration bursts, the pouring thoughts can follow the fingertips and turn into casual and free expression. Professional personal IT project outsourcing, nationwide orders, java projects, php projects, python projects, golang projects, Android projects, ios projects are not rejected, and colleagues and customers are welcome to come to cooperate.'}
      ]
    }
  },
  
  async asyncData ({ req, res }) {
  },
	mounted(){
      console.log(this)
	},
	methods: {
        goToArticleDetail(){
            // this.$router.push({name: "article-id", query: {id: this.article.id}})
        },
        goToClassifyDetail(id){
            // this.$router.push({name: "classify-id", query: {id: id, page: 1}})            
        }
	}
}
</script>

<style>
.banner{
  padding-top: 10px; 
  padding-bottom: 10px; 
  display: flex; 
  flex-direction: column; 
  align-content: center; 
  align-items: center; 
  justify-content: center;
}
</style>
