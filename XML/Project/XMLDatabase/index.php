<!DOCTYPE html>
<head>

<!-- Basic Page Needs
================================================== -->
<title>Listeo</title>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">

<!-- CSS
================================================== -->
<link rel="stylesheet" href="css/style.css">
<link rel="stylesheet" href="css/colors/main.css" id="colors">

</head>

<body>

<!-- Wrapper -->
<div id="wrapper">

<!-- Header Container
================================================== -->
<header id="header-container">

	<!-- Header -->
	<div id="header">
		<div class="container">
			
			<!-- Left Side Content -->
			<div class="left-side">
				
				<!-- Logo -->
				<div id="logo">
					<a href="index.html"><img src="images/logo.png" alt=""></a>
				</div>

				<!-- Mobile Navigation -->
				<div class="mmenu-trigger">
					<button class="hamburger hamburger--collapse" type="button">
						<span class="hamburger-box">
							<span class="hamburger-inner"></span>
						</span>
					</button>
				</div>

				<!-- Main Navigation -->
				<nav id="navigation" class="style-1">
					<ul id="responsive">

						<li><a  href="index.php">Home</a>

						</li>

						<li><a  href="pages-contact.html">Contact</a>
						</li>

					</ul>
				</nav>
				<div class="clearfix"></div>
				<!-- Main Navigation / End -->
				
			</div>
			<!-- Left Side Content / End -->


			<!-- Right Side Content / End -->
			<div class="right-side">
				<div class="header-widget">
					<!-- <a href="#sign-in-dialog" class="sign-in popup-with-zoom-anim"><i class="sl sl-icon-login"></i> Sign In</a> -->
					<a href="dashboard-add-listing.html" class="button border with-icon">Add Listing <i class="sl sl-icon-plus"></i></a>
				</div>
			</div>
			<!-- Right Side Content / End -->

			<!-- Sign In Popup -->
			<div id="sign-in-dialog" class="zoom-anim-dialog mfp-hide">

				<div class="small-dialog-header">
					<h3>Sign In</h3>
				</div>
		</div>
	</div>
	<!-- Header / End -->

</header>
<div class="clearfix"></div>
<!-- Header Container / End -->


<!-- Map
================================================== -->
<div id="map-container" class="fullwidth-home-map">

    <div id="map" data-map-zoom="9">
		<!-- map goes here -->
		
    </div>

	<div class="main-search-inner">

		<div class="container">
			<div class="row">
				<div class="col-md-12">
					
					<div class="main-search-input">
						<div class="main-search-input-item">
							<input type="text" placeholder="กลุ่มผลิตภัณฑ์" value=""/>
						</div>
						<div class="main-search-input-item location">
							<input name = "locate" id="Locate" type="text" placeholder="Location" value="" />
							<a ><i class="fa fa-dot-circle-o" onclick="getLocation()" ></i></a>
						</div>

						<div class="main-search-input-item">
							<select data-placeholder="All Categories" class="chosen-select" name = "ptype" id="ptype" >
								<option>ทั้งหมด</option>
								<option>หัตถกรรม</option>
								<option>เครื่องแต่งกาย</option>
								<option>เครื่องจักรสาน</option>
								<option>ของใช้</option>
								<option>เครื่องประดับ</option>
								<option>อื่นๆ</option>
							</select>
						</div>

						<button class="button" id="search-map">Search</button>

					</div>
				</div>
			</div>
		</div>

	</div>

    <!-- Scroll Enabling Button -->
	<a  id="scrollEnabling" title="Enable or disable scrolling on map">Enable Scrolling</a>
</div>

<!-- Content
================================================== -->
<div class="container">
	<div class="row">

		<div class="col-md-12">

			<!-- Sorting - Filtering Section -->
			<div class="row margin-bottom-25 margin-top-40">

				<div class="col-md-6">
					<!-- Layout Switcher -->

				</div>

				<div class="col-md-6">
					<div class="fullwidth-filters">
						


						<!-- Panel Dropdown-->
						<!-- <div class="panel-dropdown float-right">
							<a href="#">Distance Radius</a>
							<div class="panel-dropdown-content">
								<input class="distance-radius" type="range" min="1" max="100" step="1" value="50" data-title="Radius around selected destination">
								<div class="panel-buttons">
									<button class="panel-cancel">Disable</button>
									<button class="panel-apply">Apply</button>
								</div>
							</div>
						</div> -->
						<!-- Panel Dropdown / End -->

						<!-- Sort by -->
						<!-- <div class="sort-by">
							<div class="sort-by-select">
								<select data-placeholder="Default order" class="chosen-select-no-single">
									<option>Default Order</option>	
									<option>Newest Listings</option>
									<option>Oldest Listings</option>
								</select>
							</div>
						</div> -->
						<!-- Sort by / End -->

					</div>
				</div>

			</div>
			<!-- Sorting - Filtering Section / End -->
			
<?php 

	require'./contactDB.php';
	//if ()
	$sql="select*from product";
	$result = mysqli_query($con,$sql);
	$count = mysqli_num_rows($result);
	//echo $count;
	 echo "<link rel="."stylesheet"." href="."css/style.css".">";
	echo "<link rel="."stylesheet" ." href="."css/colors/main.css"." id="."colors".">";
	echo "<div class="."row".">";
	for ($i =0; $i < $count; $i++) {
		$row = mysqli_fetch_object($result);
		//$img = pic1;
		
		//Listing Item
		echo "<div class= 'col-lg-12 col-md-12'>";
			echo "<div class="."'listing-item-container list-layout'".">";
				echo "<a href=".$row->product_id."php" ." ".'method = "get"'." class="."listing-item".">";
					//Picture
					echo "<div class="."listing-item-image".">";
						echo "<img src="."picInput/".$row->pic1." alt="."".">" ;
						echo "<span class="."tag".">".$row->p_type."</span>";
					echo "</div>";

					//content
					echo "<div class="."listing-item-content".">";
						echo  "<div class="."listing-badge"."&#x20"."now-open".">Now Open</div>";
						echo "<div class="."listing-item-inner".">";
							echo "<h3>".$row->g_name ." <i class="."verified-icon"."></i></h3>";
							echo "<span>".$row->address."</span>";
							echo "<div class="."star-rating" ." "."data-rating="."3.5".">" ;
								echo "<div class="."rating-counter".">(12 reviews)</div>";
							echo "</div>";
						echo "</div>";
						echo "<span class="."like-icon"."></span>";
					echo "</div>";
				echo "</a>";
			echo "</div>";
		echo "</div>";
					

		// echo "id: ".$row-> product_id."<br>";
		// echo "id: ".$row-> product_id."<br>";
		// echo "id: ".$row-> product_id."<br>";
		// echo "id: ".$row-> product_id."<br>";
		// echo "id: ".$row-> product_id."<br>";




	}




?>



<!-- Footer
================================================== -->
<div id="footer" class="margin-top-15">
	<!-- Main -->
	<div class="container">
		<div class="row">
			<div class="col-md-5 col-sm-6">
				<img class="footer-logo" src="images/logo.png" alt="">
				<br><br>
				<p>โครงการรวบรวมสินค้า OTOP ภาคอีสานตอนบน เป็นส่วนหนึ่งของรายวิชา 198371 XML AND WEB SERVICES เนื่องจากผู้จัดทำได้โจทย์จากทาง Innovation Hub KKU เพื่อจัดทำเว็บไซต์รวบรวมสินค้า OTOP ภาคอีสานตอนบน ซึ่งทางผู้จัดทำได้เห็นถึงคุณประโยชน์ในส่วนนี้จึงได้ร่วมจัดทำเว็บไซต์นี้ขึ้นมา</p>
			</div>

			<div class="col-md-4 col-sm-6 ">
				<h4>Helpful Links</h4>
				<ul class="footer-links">
					<li><a href="index.php">Home </a></li>
					<li><a href="pages-contact.html">Contact</a></li>
					<li><a href="dashboard-add-listing.html">Admin</a></li>
				</ul>

				<ul class="footer-links">
					<li><a href="https://www.innohubkku.com/">innovation Hub KKU</a></li>
					<li><a href="https://www.en.kku.ac.th/web/coe/">คณะวิศวกรรมศาสตร์</a></li>
					<li><a href="https://www.en.kku.ac.th/web/">สาขาวิชาวิศวกรรมคอมพิวเตอร์</a></li>

				</ul>
				<div class="clearfix"></div>
			</div>		

			<div class="col-md-3  col-sm-12">
				<h4>ช่องทางติดต่อ</h4>
				<div class="text-widget">
					<span>ภาควิชาวิศวกรรมคอมพิวเตอร์ คณะวิศวกรรมศาสตร์ มหาวิทยาลัยขอนแก่น อ.เมือง จ.ขอนแก่น 40002</span> <br>
					Phone: <span>0945304058 </span><br>
					E-Mail:<span> <a href="#">p_anusorn@kkumail.com</a> </span><br>

				</div>

				<ul class="social-icons margin-top-20">
					<li><a class="facebook" href="https://web.facebook.com/AnsPjr"><i class="icon-facebook"></i></a></li>
					<li><a class="twitter" href="https://twitter.com/AnsPjr"><i class="icon-twitter"></i></a></li>
					<li><a class="gplus" href="https://plus.google.com/u/0/102668199108160937946"><i class="icon-gplus"></i></a></li>
					<li><a class="vimeo" href="#"><i class="icon-vimeo"></i></a></li>
				</ul>

			</div>

		</div>
		
		<!-- Copyright -->
		<div class="row">
			<div class="col-md-12">
				<!-- <div class="copyrights">© 2017 Listeo. All Rights Reserved.</div> -->
			</div>
		</div>

	</div>

</div>
<!-- Footer / End -->


<!-- Back To Top Button -->
<div id="backtotop"><a href="#"></a></div>


</div>
<!-- Wrapper / End -->


<!-- Get Location Latitude and Longitude  -->
<script>

		function getLocation() {
		  if (navigator.geolocation) {
			navigator.geolocation.getCurrentPosition(showPosition);
		  } else { 
			x.innerHTML = "Geolocation is not supported by this browser.";
		  }
		}
		
		function showPosition(position) {
			document.getElementById("Locate").value = position.coords.latitude + 
		  " , " + position.coords.longitude;
		}
		</script>


<!-- ================================================== --> 

<!-- Scripts
================================================== -->
<script type="text/javascript" src="scripts/jquery-2.2.0.min.js"></script>
<script type="text/javascript" src="scripts/mmenu.min.js"></script>
<script type="text/javascript" src="scripts/chosen.min.js"></script>
<script type="text/javascript" src="scripts/slick.min.js"></script>
<script type="text/javascript" src="scripts/rangeslider.min.js"></script>
<script type="text/javascript" src="scripts/magnific-popup.min.js"></script>
<script type="text/javascript" src="scripts/waypoints.min.js"></script>
<script type="text/javascript" src="scripts/counterup.min.js"></script>
<script type="text/javascript" src="scripts/jquery-ui.min.js"></script>
<script type="text/javascript" src="scripts/tooltips.min.js"></script>
<script type="text/javascript" src="scripts/custom.js"></script>


<!-- Maps -->
<!-- <script type="text/javascript" src="http://maps.google.com/maps/api/js?key=AIzaSyAk7mSHqM-dICaQ-xkm7WPj1P5hVn0lTd0"></script> -->
<script  src="https://maps.googleapis.com/maps/api/js?key=AIzaSyAk7mSHqM-dICaQ-xkm7WPj1P5hVn0lTd0" type="text/javascript"></script>
<script type="text/javascript" src="scripts/infobox.min.js"></script>
<script type="text/javascript" src="scripts/markerclusterer.js"></script>
<script type="text/javascript" src="scripts/maps.js"></script>





</body>
</html>



