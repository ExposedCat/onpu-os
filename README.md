## ONPU Operating Systems, CS, Lab 1 [![Visits Badge](https://badges.pufler.dev/visits/exposedcat/onpu-os-lab-1)](https://github.com/ExposedCat/onpu-os-lab-1)  
Variant: **2**  

## Creating copy
1. Generate markers  
1.1. Go to [markers generator](https://au.gmented.com/app/marker/marker.php)  
1.2. Set `Add a quiet zone around marker (of same size as border)` to `true`  
1.3. Set `Border size (% of marker width)` to `0.1`  
1.4. Set `Markers have white borders` to `true`  
1.5. Set `Generate a range of markers from code` to `1`-`3` (use wider range to create more markers)  
1.6. Click `Click here to download a ZIP archive containing the images.` to download archive, then extract generated markers  
2. Generate pattern files  
2.1. Go to [pattern generator](https://jeromeetienne.github.io/AR.js/three.js/examples/marker-training/examples/generator.html)  
2.2. Upload marker using `Upload` button  
2.3. Set `Pattern Ratio` to 0.9  
2.4. Click `Download marker` to download pattern file and `Download image` to download final marker image  
2.5. Repeat for each marker
3. Generate application code  
3.1. Go to [AR application generator](http://ar.gamehub.od.ua/)  
3.2. Upload pattern file  
3.3. Repeat for each pattern file  
3.4. Proceed with `Пiдтвердити`  
3.5. Choose image and audio file for each pattern file (you need to upload audio file before next image)  
3.4. Click `Пiдтвердити` to generate application code  
3.5. Copy generated code from `<!DOCTYPE html>` to `</html>`  
4. Download dependencies  
4.1. Go to [docs page](http://ar.gamehub.od.ua/docs.html)  
4.2. Click `Завантажити файли бібліотек`  
4.3. Extract downloaded archive to project folder  
5. Create project  
5.1. Create `index.html` file in project folder  
5.2. Paste code to created file  
5.3. Move all pattern files, images and audio files to project folder  
6. Make app public  
6.1. Create GitHub repository  
6.2. Upload project folder contents to created repo  
6.3. On repo page go to `Settings` (headerbar) → `Pages` (sidebar)  
6.4. At `Source` choose main branch and root directory  
6.5. Click `Save`    

🎯 Created app will be available at `https://`USERNAME`.github.io/`REPONAME`/`